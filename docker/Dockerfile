FROM debian:11.3 AS pcvs-training

LABEL \
	name = "Parallel Computing Validation Suite - Training container" \
	description = "" \
	license= "CeCILL-C (LGPL-compatible)" \
	builddate = "20220630" \
	maintainer.project = "Julien Jaeger <jaegerj@paratools.com>" \
	maintainer.docker = "Julien Adam <adamj@paratools.com>"

RUN apt-get update && apt-get install --no-install-recommends -y \
	sudo git procps \
	python3 python3-pip \
	openmpi-bin libopenmpi-dev \
	build-essential vim nano emacs

RUN groupadd sudo; exit 0
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers
RUN useradd -G sudo -ms /bin/bash user
RUN pip3 install virtualenv pygments

#RUN wget tarball

USER user
WORKDIR /home/user
CMD /bin/bash
ENV PATH="/home/user/.local/bin:${PATH}"
RUN git clone --branch devel https://github.com/cea-hpc/pcvs.git

